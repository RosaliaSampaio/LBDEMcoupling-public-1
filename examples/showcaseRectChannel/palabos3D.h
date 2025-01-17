/* This file is part of the Palabos library.
 *
 * The Palabos softare is developed since 2011 by FlowKit-Numeca Group Sarl
 * (Switzerland) and the University of Geneva (Switzerland), which jointly
 * own the IP rights for most of the code base. Since October 2019, the
 * Palabos project is maintained by the University of Geneva and accepts
 * source code contributions from the community.
 *
 * Contact:
 * Jonas Latt
 * Computer Science Department
 * University of Geneva
 * 7 Route de Drize
 * 1227 Carouge, Switzerland
 * jonas.latt@unige.ch
 *
 * The most recent release of Palabos can be downloaded at
 * <https://palabos.unige.ch/>
 *
 * The library Palabos is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * The library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "~/Thesis/LBDEMcoupling-public/examples/showcaseRectChannel/algorithm/headers3D.h"
#include <../atomicBlock/headers3D.h>
#include <../basicDynamics/headers3D.h>
#include <../boundaryCondition/headers3D.h>
#include <../coProcessors/headers3D.h>
#include <../complexDynamics/headers3D.h>
#include <../core/globalDefs.h>
#include <../core/headers3D.h>
#include <../dataProcessors/headers3D.h>
#include <../finiteDifference/headers3D.h>
#include <../gridRefinement/headers3D.h>
#include <../io/headers3D.h>
#include <../latticeBoltzmann/headers3D.h>
#include <../libraryInterfaces/headers3D.h>
#include <../multiBlock/headers3D.h>
#include <multiGrid/headers3D.h>
#include <multiPhysics/headers3D.h>
#include <offLattice/headers3D.h>
#include <parallelism/headers3D.h>
#include <particles/headers3D.h>

// Include also 2D data structures. They are for
// example required to write 2D images.
#include <atomicBlock/headers2D.h>
#include <core/headers2D.h>
#include <multiBlock/headers2D.h>
#include <multiGrid/headers2D.h>
