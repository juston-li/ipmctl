/*
 * Copyright (c) 2018, Intel Corporation.
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _DUMP_DEVICE_SUPPORT_COMMAND_H_
#define _DUMP_DEVICE_SUPPORT_COMMAND_H_

#include <Uefi.h>
#include "NvmInterface.h"
#include "Common.h"

/**
  Register dump -support -dimm command

  @retval EFI_SUCCESS success
  @retval EFI_ABORTED registering failure
  @retval EFI_OUT_OF_RESOURCES memory allocation failure
**/
EFI_STATUS
RegisterDumpDeviceSupportCommand(
  );

/**
  Dump device support data command

  @param[in] pCmd Command from CLI

  @retval EFI_SUCCESS Success
  @retval EFI_INVALID_PARAMETER pCmd NULL or invalid command line parameters
  @retval EFI_OUT_OF_RESOURCES Memory allocation failure
  @retval EFI_ABORTED invoking CONFIG_PROTOCOL Function failure
**/
EFI_STATUS
DumpDeviceSupportCommand(
  IN    struct Command *pCmd
  );

#endif
