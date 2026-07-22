#pragma once

class CPathSimple : public C_BaseEntity /*0x0*/  // sizeof 0x890, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x790, size 0xA0, align 255
    char _pad_0830[0x50]; // offset 0x830
    CUtlString m_pathString; // offset 0x880, size 0x8, align 8
    bool m_bClosedLoop; // offset 0x888, size 0x1, align 1
    char _pad_0889[0x7]; // offset 0x889
};
