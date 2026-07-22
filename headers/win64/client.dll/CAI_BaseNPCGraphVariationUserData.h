#pragma once

class CAI_BaseNPCGraphVariationUserData : public CBaseAnimGraphVariationUserData /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    CUtlVector< CGlobalSymbol > m_sActionHandshakesSupported; // offset 0x8, size 0x18, align 8
    CUtlVector< CGlobalSymbol > m_sMovementHandshakesSupported; // offset 0x20, size 0x18, align 8
};
