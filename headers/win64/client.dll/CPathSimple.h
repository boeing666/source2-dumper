#pragma once

class CPathSimple : public C_BaseEntity /*0x0*/  // sizeof 0x700, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x600]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x600, size 0xA0, align 255
    char _pad_06A0[0x50]; // offset 0x6A0
    CUtlString m_pathString; // offset 0x6F0, size 0x8, align 8
    bool m_bClosedLoop; // offset 0x6F8, size 0x1, align 1
    char _pad_06F9[0x7]; // offset 0x6F9
};
