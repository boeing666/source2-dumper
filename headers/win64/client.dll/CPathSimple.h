#pragma once

class CPathSimple : public C_BaseEntity /*0x0*/  // sizeof 0x710, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x610]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x610, size 0xA0, align 255
    char _pad_06B0[0x50]; // offset 0x6B0
    CUtlString m_pathString; // offset 0x700, size 0x8, align 8
    bool m_bClosedLoop; // offset 0x708, size 0x1, align 1
    char _pad_0709[0x7]; // offset 0x709
};
