/*
 * This file is part of the LBDEMcoupling software.
 *
 * LBDEMcoupling is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Copyright 2014 Johannes Kepler University Linz
 *
 * Author: Philippe Seil (philippe.seil@jku.at)
 */

#ifndef IB_DYNAMICS_PARTICLE_DATA_H_LBDEM
#define IB_DYNAMICS_PARTICLE_DATA_H_LBDEM

namespace plb {

  template<typename T, template<typename U> class Descriptor>
  struct IBdynamicsParticleDataContainer {
  public:
    IBdynamicsParticleDataContainer();
    plint partId;
    T solidFraction;
    Array<T,Descriptor<T>::d> uPart;
    Array<T,Descriptor<T>::d> hydrodynamicForce;
    void serialize(HierarchicSerializer& serializer) const;
    void unserialize(HierarchicUnserializer& unserializer);
  };

  template<typename T, template<typename U> class Descriptor>
  struct IBdynamicsParticleData {
  public:
    IBdynamicsParticleDataContainer<T,Descriptor> particleData;
  };


  template<typename T, template<typename U> class Descriptor>
  IBdynamicsParticleDataContainer<T,Descriptor>::IBdynamicsParticleDataContainer()
    : partId(0),solidFraction(0.)
  {
    uPart.resetToZero();
    hydrodynamicForce.resetToZero();
  }
  
  template<typename T, template<typename U> class Descriptor>
  void IBdynamicsParticleDataContainer<T,Descriptor>::serialize(HierarchicSerializer &serializer) const
  {

    for(plint i=0;i<Descriptor<T>::d;i++)
      serializer.addValue(uPart[i]);

    for(plint i=0;i<Descriptor<T>::d;i++)
      serializer.addValue(hydrodynamicForce[i]);
    
    serializer.addValue(solidFraction);
    serializer.addValue<plint>(partId);

  }

  template<typename T, template<typename U> class Descriptor>
  void IBdynamicsParticleDataContainer<T,Descriptor>::unserialize(HierarchicUnserializer &unserializer)
  {

    for(plint i=0;i<Descriptor<T>::d;i++)
      unserializer.readValue(uPart[i]);

    for(plint i=0;i<Descriptor<T>::d;i++)
      unserializer.readValue(hydrodynamicForce[i]);

    unserializer.readValue(solidFraction);
    unserializer.readValue<plint>(partId);
  }

};


#endif /* IB_DYNAMICS_PARTICLE_DATA_H_LBDEM */
