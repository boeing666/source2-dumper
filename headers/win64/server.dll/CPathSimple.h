#pragma once

class CPathSimple : public CBaseEntity /*0x0*/  // sizeof 0x5A0, align 0x10 [vtable] (server) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    CPathQueryComponent m_CPathQueryComponent; // offset 0x4A0, size 0xA0, align 255
    char _pad_0540[0x50]; // offset 0x540
    CUtlString m_pathString; // offset 0x590, size 0x8, align 8
    bool m_bClosedLoop; // offset 0x598, size 0x1, align 1
    char _pad_0599[0x7]; // offset 0x599
};
