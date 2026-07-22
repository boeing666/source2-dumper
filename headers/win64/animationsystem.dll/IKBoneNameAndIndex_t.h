#pragma once

struct IKBoneNameAndIndex_t  // sizeof 0x10, align 0xFF (animgraphlib)
{
    CUtlString m_Name; // offset 0x0, size 0x8, align 8 | MPropertyAttributeChoiceName
    char _pad_0008[0x8]; // offset 0x8
};
