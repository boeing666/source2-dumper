#pragma once

class CModifierDoormanHotelImposterVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x770, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x750]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter_FX > m_ImposterModifierFX; // offset 0x750, size 0x10, align 8
    CSoundEventName m_strKeyTurnSound; // offset 0x760, size 0x10, align 8 | MPropertyStartGroup
};
