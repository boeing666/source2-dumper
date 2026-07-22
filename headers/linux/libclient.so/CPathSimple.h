#pragma once

class CPathSimple : public C_BaseEntity /*0x0*/  // sizeof 0x880, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x780]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x780, size 0xA0, align 255
    char _pad_0820[0x50]; // offset 0x820
    CUtlString m_pathString; // offset 0x870, size 0x8, align 8
    bool m_bClosedLoop; // offset 0x878, size 0x1, align 1
    char _pad_0879[0x7]; // offset 0x879
};
