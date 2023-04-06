/*
 * Copyright (c) 2023 Huawei Device Co., Ltd.
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef HDF_LOAD_VDI_H
#define HDF_LOAD_VDI_H

#include "hdf_base.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct HdfVdiBase {
    uint32_t moduleVersion;
    const char *moduleName;
    int (*OpenVdi)(struct HdfVdiBase *vdiBase);
    int (*CloseVdi)(struct HdfVdiBase *vdiBase);
};

struct HdfVdiObject {
    uintptr_t dlHandler;
    struct HdfVdiBase *vdiBase;
};

struct HdfVdiObject *HdfLoadVdi(const char *soName, uint32_t version);
void HdfCloseVdi(struct HdfVdiObject *vdi);

#define HDF_VDI_INIT(module) struct HdfVdiBase *hdfVdiDesc = (struct HdfVdiBase *)&(module)

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* HDF_LOAD_VDI_H */

