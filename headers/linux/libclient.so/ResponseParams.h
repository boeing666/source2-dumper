#pragma once

class ResponseParams  // sizeof 0x1C, align 0x1 [trivial_dtor] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    int16 odds; // offset 0x10, size 0x2, align 2
    int16 flags; // offset 0x12, size 0x2, align 2
    ResponseFollowup* m_pFollowup; // offset 0x14, size 0x8, align 8 | MNotSaved
};
