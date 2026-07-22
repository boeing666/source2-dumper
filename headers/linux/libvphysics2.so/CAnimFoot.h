#pragma once

class CAnimFoot  // sizeof 0x28, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    CUtlString m_name; // offset 0x0, size 0x8, align 8
    Vector m_vBallOffset; // offset 0x8, size 0xC, align 4
    Vector m_vHeelOffset; // offset 0x14, size 0xC, align 4
    int32 m_ankleBoneIndex; // offset 0x20, size 0x4, align 4
    int32 m_toeBoneIndex; // offset 0x24, size 0x4, align 4
};
