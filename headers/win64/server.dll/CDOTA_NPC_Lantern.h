#pragma once

class CDOTA_NPC_Lantern : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1B48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1B40]; // offset 0x0
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1B40, size 0x8, align 8
};
