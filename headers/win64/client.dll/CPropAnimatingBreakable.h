#pragma once

class CPropAnimatingBreakable : public CBaseAnimGraph /*0x0*/  // sizeof 0xE58, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xDF8]; // offset 0x0
    CBreakableStageHelper m_stages; // offset 0xDF8, size 0x18, align 8
    CEntityIOOutput m_OnTakeDamage; // offset 0xE10, size 0x18, align 255
    CEntityIOOutput m_OnFinalBreak; // offset 0xE28, size 0x18, align 255
    CEntityIOOutput m_OnStageAdvanced; // offset 0xE40, size 0x18, align 255
};
