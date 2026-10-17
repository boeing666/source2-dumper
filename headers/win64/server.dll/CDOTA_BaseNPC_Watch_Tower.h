#pragma once

class CDOTA_BaseNPC_Watch_Tower : public CDOTA_BaseNPC_Building /*0x0*/  // sizeof 0x1AC0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1AB0]; // offset 0x0
    CUtlSymbolLarge m_szOutpostName; // offset 0x1AB0, size 0x8, align 8
    CUtlSymbolLarge m_szInteractAbilityName; // offset 0x1AB8, size 0x8, align 8
};
