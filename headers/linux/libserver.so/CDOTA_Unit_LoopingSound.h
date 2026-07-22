#pragma once

class CDOTA_Unit_LoopingSound : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1C88, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B80]; // offset 0x0
    char[256] m_pszNetworkedSoundLoop; // offset 0x1B80, size 0x100, align 1
    int32 m_nLoopingSoundParity; // offset 0x1C80, size 0x4, align 4
    char _pad_1C84[0x4]; // offset 0x1C84
};
