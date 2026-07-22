#pragma once

class ResponseParams  // sizeof 0x20, align 0x8 [trivial_dtor] (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 odds; // offset 0x10, size 0x2, align 2
    int16 flags; // offset 0x12, size 0x2, align 2
    char _pad_0014[0x4]; // offset 0x14
    ResponseFollowup* m_pFollowup; // offset 0x18, size 0x8, align 8 | MNotSaved
};
