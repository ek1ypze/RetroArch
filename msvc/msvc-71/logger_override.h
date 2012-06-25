/*  RetroArch - A frontend for libretro.
 *  Copyright (C) 2010-2012 - Hans-Kristian Arntzen
 *  Copyright (C) 2011-2012 - Daniel De Matteis
 * 
 *  RetroArch is free software: you can redistribute it and/or modify it under the terms
 *  of the GNU General Public License as published by the Free Software Found-
 *  ation, either version 3 of the License, or (at your option) any later version.
 *
 *  RetroArch is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 *  without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
 *  PURPOSE.  See the GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along with RetroArch.
 *  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __MSVC_71_H
#define __MSVC_71_H

#include <stdarg.h>

static inline void RARCH_LOG(const char *msg, ...)
{
   va_list ap;
   va_start(ap, msg);
   fprintf(stderr, "RetroArch: ");
   vfprintf(stderr, msg, ap);
   va_end(ap);
}

static inline void RARCH_WARN(const char *msg, ...)
{
   va_list ap;
   va_start(ap, msg);
   fprintf(stderr, "RetroArch [WARN] :: ");
   vfprintf(stderr, msg, ap);
   va_end(ap);
}

static inline void RARCH_ERR(const char *msg, ...)
{
   va_list ap;
   va_start(ap, msg);
   fprintf(stderr, "RetroArch [ERR] :: ");
   vfprintf(stderr, msg, ap);
   va_end(ap);
}

#endif
