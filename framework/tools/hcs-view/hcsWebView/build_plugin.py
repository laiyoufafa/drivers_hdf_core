#!/usr/bin/env python
# -*- coding: utf-8 -*-

# Copyright (c) 2022 Shenzhen Kaihong Digital Industry Development Co., Ltd.
#
# HDF is dual licensed: you can use it either under the terms of
# the GPL, or the BSD license, at your option.
# See the LICENSE file in the root of this repository for complete details.

from asyncio import subprocess

if __name__ == "__main__":
    # development production
    subprocess.run(["npx", "webpack", "--mode=development"])
    with open(r".\..\hcs_config_plugin\editor.html", "r", encoding="utf8") as file:
        ss = file.read()
    i1 = ss.index("// update js code begin") + len("// update js code begin") + 1
    i2 = ss.index("// update js code end") - 1
    with open(r".\dist\main.js", "r", encoding="utf8") as file:
        destss = file.read()
    ss = ss[:i1] + destss + ss[i2:]
    with open(r".\..\hcs_config_plugin\editor.html", "w", encoding="utf8") as file:
        file.write(ss)
    print("replace success")