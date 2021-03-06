// -*-c++-*-

/*!
  \file body_intercept.h
  \brief ball chasing action including smart planning.
*/

/*
 *Copyright:

 Copyright (C) Hidehisa AKIYAMA

 This code is free software; you can redistribute it and/or
 modify it under the terms of the GNU Lesser General Public
 License as published by the Free Software Foundation; either
 version 3 of the License, or (at your option) any later version.

 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 Lesser General Public License for more details.

 You should have received a copy of the GNU Lesser General Public
 License along with this library; if not, write to the Free Software
 Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA

 *EndCopyright:
 */

/////////////////////////////////////////////////////////////////////

#ifndef RCSC_ACTION_BODY_INTERCEPT_H
#define RCSC_ACTION_BODY_INTERCEPT_H

//#include <rcsc/action/body_intercept2008.h>
#include <rcsc/action/body_intercept2009.h>

namespace rcsc {

//! alias of the default action.
//typedef Body_Intercept2008 Body_Intercept;
typedef Body_Intercept2009 Body_Intercept;

}

#endif
