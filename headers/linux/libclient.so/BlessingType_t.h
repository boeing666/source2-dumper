#pragma once

struct BlessingType_t  // sizeof 0x20, align 0x8 (client) {MGetKV3ClassDefaults MVDataOutlinerIconExpr}
{
    BlessingTypeID_t nID; // offset 0x0, size 0x4, align 255 | MVDataUniqueMonotonicInt MPropertyAttributeEditor
    char _pad_0004[0xC]; // offset 0x4
    CPanoramaImageName szIconImage; // offset 0x10, size 0x10, align 8
};
