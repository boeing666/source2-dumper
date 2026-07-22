#pragma once

class CPropAnimatingBreakable : public CBaseAnimGraph /*0x0*/  // sizeof 0xD08, align 0x8 [vtable] (client) {MNetworkIncludeByName MNetworkIncludeByName}
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CBreakableStageHelper m_stages; // offset 0xCA8, size 0x18, align 255
    CEntityIOOutput m_OnTakeDamage; // offset 0xCC0, size 0x18, align 255
    CEntityIOOutput m_OnFinalBreak; // offset 0xCD8, size 0x18, align 255
    CEntityIOOutput m_OnStageAdvanced; // offset 0xCF0, size 0x18, align 255
};
