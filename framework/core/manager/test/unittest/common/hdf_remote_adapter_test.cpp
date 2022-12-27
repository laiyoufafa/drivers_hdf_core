/*
 * Copyright (c) 2022 Huawei Device Co., Ltd.
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

#include <gtest/gtest.h>
#include <hdf_sbuf.h>
#include <iostream>

#include "hdf_remote_adapter.h"
#include "hdf_remote_adapter_if.h"

namespace OHOS {
using namespace testing::ext;

class HdfRemoteAdapterTest : public testing::Test {
public:
    static void SetUpTestCase() {}
    static void TearDownTestCase() {}

    void SetUp() {};
    void TearDown() {};
};

HWTEST_F(HdfRemoteAdapterTest, HdfRemoteAdapterTest001, TestSize.Level1)
{
    HdfRemoteServiceHolder *holder = new HdfRemoteServiceHolder();
    int ret = holder->SetInterfaceDescriptor(NULL);
    ASSERT_EQ(ret, false);
    const char *desc = "";
    ret = holder->SetInterfaceDescriptor(desc);
    ASSERT_EQ(ret, false);
}

HWTEST_F(HdfRemoteAdapterTest, HdfRemoteAdapterTest002, TestSize.Level1)
{
    HdfRemoteAdapterAddDeathRecipient(NULL, NULL);
    HdfRemoteService service;
    HdfRemoteAdapterAddDeathRecipient(&service, NULL);
    HdfRemoteAdapterRemoveDeathRecipient(NULL, NULL);
    HdfRemoteAdapterRemoveDeathRecipient(&service, NULL);
}

HWTEST_F(HdfRemoteAdapterTest, HdfRemoteAdapterTest003, TestSize.Level1)
{
    int ret = HdfRemoteAdapterAddService(NULL, NULL);
    ASSERT_EQ(ret, HDF_ERR_INVALID_PARAM);
    const char *name = "";
    ret = HdfRemoteAdapterAddService(name, NULL);
    ASSERT_EQ(ret, HDF_ERR_INVALID_PARAM);
    HdfRemoteService service;
    ret = HdfRemoteAdapterAddService(name, &service);
    ASSERT_EQ(ret, HDF_FAILURE);

    HdfRemoteService *remote = HdfRemoteAdapterGetService(NULL);
    ASSERT_EQ(remote, nullptr);
    remote = HdfRemoteAdapterGetService(name);
    ASSERT_EQ(remote, nullptr);

    ret = HdfRemoteAdapterAddSa(-1, NULL);
    ASSERT_EQ(ret, HDF_ERR_INVALID_PARAM);

    remote = HdfRemoteAdapterGetSa(-1);
    ASSERT_EQ(remote, nullptr);
}

HWTEST_F(HdfRemoteAdapterTest, HdfRemoteAdapterTest004, TestSize.Level1)
{
    bool ret = HdfRemoteAdapterSetInterfaceDesc(NULL, NULL);
    ASSERT_EQ(ret, false);
    HdfRemoteService service;
    ret = HdfRemoteAdapterSetInterfaceDesc(&service, NULL);
    ASSERT_EQ(ret, false);

    ret = HdfRemoteAdapterWriteInterfaceToken(NULL, NULL);
    ASSERT_EQ(ret, false);
    ret = HdfRemoteAdapterWriteInterfaceToken(&service, NULL);
    ASSERT_EQ(ret, false);

    ret = HdfRemoteAdapterCheckInterfaceToken(NULL, NULL);
    ASSERT_EQ(ret, false);
    ret = HdfRemoteAdapterCheckInterfaceToken(&service, NULL);
    ASSERT_EQ(ret, false);
}

HWTEST_F(HdfRemoteAdapterTest, HdfRemoteAdapterTest005, TestSize.Level1)
{
    int ret = HdfRemoteGetCallingPid();
    ASSERT_TRUE(ret > 0);
    ret = HdfRemoteGetCallingUid();
    ASSERT_TRUE(ret >= 0);
}
} // namespace OHOS