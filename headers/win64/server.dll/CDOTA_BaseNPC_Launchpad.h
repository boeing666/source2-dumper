#pragma once

class CDOTA_BaseNPC_Launchpad : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x19C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x19B8]; // offset 0x0
    int32 m_iStrength; // offset 0x19B8, size 0x4, align 4
    char _pad_19BC[0x4]; // offset 0x19BC
};
