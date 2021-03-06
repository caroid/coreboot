/* $NoKeywords:$ */
/**
 * @file
 *
 * AMD CPU BrandId related functions and structures for socket G34.
 *
 * Contains code that provides CPU BrandId information
 *
 * @xrefitem bom "File Content Label" "Release Content"
 * @e project:      AGESA
 * @e sub-project:  CPU
 * @e \$Revision: 56279 $   @e \$Date: 2011-07-11 13:11:28 -0600 (Mon, 11 Jul 2011) $
 *
 */
/*
 ******************************************************************************
 *
 * Copyright (C) 2012 Advanced Micro Devices, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Advanced Micro Devices, Inc. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL ADVANCED MICRO DEVICES, INC. BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

/*----------------------------------------------------------------------------------------
 *                             M O D U L E S    U S E D
 *----------------------------------------------------------------------------------------
 */
#include "AGESA.h"
#include "cpuRegisters.h"
#include "cpuEarlyInit.h"
CODE_GROUP (G1_PEICC)
RDATA_GROUP (G2_PEI)

/*----------------------------------------------------------------------------------------
 *                   D E F I N I T I O N S    A N D    M A C R O S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                  T Y P E D E F S     A N D     S T R U C T U R E S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *           P R O T O T Y P E S     O F     L O C A L     F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */

/*----------------------------------------------------------------------------------------
 *                          E X P O R T E D    F U N C T I O N S
 *----------------------------------------------------------------------------------------
 */


// PRIVATE FORMAT FOR BRAND TABLE ... FOR AMD USE ONLY

// String1
CONST CHAR8 ROMDATA str_F10_G34_Opteron_61[] = "AMD Opteron(tm) Processor 61";
CONST CHAR8 ROMDATA str_F10_G34_Embedded_Opteron[] = "Embedded AMD Opteron(tm) Processor ";

// String2
CONST CHAR8 ROMDATA str2_F10_G34_SE[] = " SE";
CONST CHAR8 ROMDATA str2_F10_G34_HE[] = " HE";
CONST CHAR8 ROMDATA str2_F10_G34_QS[] = "QS";
CONST CHAR8 ROMDATA str2_F10_G34_KS[] = "KS";


/*---------------------------------------------------------------------------------------
 *               T Y P E D E F S,   S T R U C T U R E S,    E N U M S
 *---------------------------------------------------------------------------------------
 */

CONST AMD_CPU_BRAND ROMDATA CpuF10BrandIdString1ArrayG34[] =
{
  // G34r1 string1:
  {8, 0, 0x00, DR_SOCKET_G34, str_F10_G34_Opteron_61, sizeof (str_F10_G34_Opteron_61)},
  {8, 1, 0x01, DR_SOCKET_G34, str_F10_G34_Embedded_Opteron, sizeof (str_F10_G34_Embedded_Opteron)},
  {12, 0, 0x00, DR_SOCKET_G34, str_F10_G34_Opteron_61, sizeof (str_F10_G34_Opteron_61)}
};    //Cores, page, index, socket, stringstart, stringlength

CONST AMD_CPU_BRAND ROMDATA CpuF10BrandIdString2ArrayG34[] =
{
  // G34r1 string2:
  {8, 0, 0x00, DR_SOCKET_G34, str2_F10_G34_HE, sizeof (str2_F10_G34_HE)},
  {8, 0, 0x01, DR_SOCKET_G34, str2_F10_G34_SE, sizeof (str2_F10_G34_SE)},
  {8, 1, 0x01, DR_SOCKET_G34, str2_F10_G34_QS, sizeof (str2_F10_G34_QS)},
  {8, 1, 0x02, DR_SOCKET_G34, str2_F10_G34_KS, sizeof (str2_F10_G34_KS)},
  {8, 0, 0x0F, DR_SOCKET_G34, 0, 0},  //Size 0 for no suffix
  {12, 0, 0x00, DR_SOCKET_G34, str2_F10_G34_HE, sizeof (str2_F10_G34_HE)},
  {12, 0, 0x01, DR_SOCKET_G34, str2_F10_G34_SE, sizeof (str2_F10_G34_SE)},
  {12, 0, 0x0F, DR_SOCKET_G34, 0, 0}  //Size 0 for no suffix
};


CONST CPU_BRAND_TABLE ROMDATA F10BrandIdString1ArrayG34 = {
  (sizeof (CpuF10BrandIdString1ArrayG34) / sizeof (AMD_CPU_BRAND)),
  CpuF10BrandIdString1ArrayG34
};


CONST CPU_BRAND_TABLE ROMDATA F10BrandIdString2ArrayG34 = {
  (sizeof (CpuF10BrandIdString2ArrayG34) / sizeof (AMD_CPU_BRAND)),
  CpuF10BrandIdString2ArrayG34
};

