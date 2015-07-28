// Created on: 1991-10-07
// Created by: NW,JPB,CAL
// Copyright (c) 1991-1999 Matra Datavision
// Copyright (c) 1999-2014 OPEN CASCADE SAS
//
// This file is part of Open CASCADE Technology software library.
//
// This library is free software; you can redistribute it and/or modify it under
// the terms of the GNU Lesser General Public License version 2.1 as published
// by the Free Software Foundation, with special exception defined in the file
// OCCT_LGPL_EXCEPTION.txt. Consult the file LICENSE_LGPL_21.txt included in OCCT
// distribution for complete text of the license and disclaimer of any warranty.
//
// Alternatively, this file may be used under the terms of Open CASCADE
// commercial license or contractual agreement.

#ifndef _Visual3d_TypeOfSurfaceDetail_HeaderFile
#define _Visual3d_TypeOfSurfaceDetail_HeaderFile

//! Modes of visualisation of objects in a view
//!
//! TOD_NONE        no texture mapping
//! TOD_ENVIRONMENT only environnement mapping
//! TOD_ALL     environnement + texture mapping
enum Visual3d_TypeOfSurfaceDetail
{
Visual3d_TOD_NONE,
Visual3d_TOD_ENVIRONMENT,
Visual3d_TOD_ALL
};

#endif // _Visual3d_TypeOfSurfaceDetail_HeaderFile