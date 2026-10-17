#pragma once

class C_DOTA_Unit_LoopingSound : public C_DOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1BD8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1ACC]; // offset 0x0
    int32 m_nPrevLoopingSoundParity; // offset 0x1ACC, size 0x4, align 4
    char[256] m_pszNetworkedSoundLoop; // offset 0x1AD0, size 0x100, align 1
    int32 m_nLoopingSoundParity; // offset 0x1BD0, size 0x4, align 4
    char _pad_1BD4[0x4]; // offset 0x1BD4
};
