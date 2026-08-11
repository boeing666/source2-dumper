#pragma once

class CPropAnimatingBreakable : public CBaseAnimGraph /*0x0*/  // sizeof 0xAF0, align 0x10 [vtable] (server) {MNetworkIncludeByName MNetworkIncludeByName}
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    CBreakableStageHelper m_stages; // offset 0xA90, size 0x18, align 255
    CEntityIOOutput m_OnTakeDamage; // offset 0xAA8, size 0x18, align 255
    CEntityIOOutput m_OnFinalBreak; // offset 0xAC0, size 0x18, align 255
    CEntityIOOutput m_OnStageAdvanced; // offset 0xAD8, size 0x18, align 255
};
