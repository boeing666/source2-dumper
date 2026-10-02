#pragma once

class CModifierDoormanHotelImposterVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7B0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    CEmbeddedSubclass< CCitadel_Modifier_Doorman_Hotel_Imposter_FX > m_ImposterModifierFX; // offset 0x790, size 0x10, align 8
    CSoundEventName m_strKeyTurnSound; // offset 0x7A0, size 0x10, align 8 | MPropertyStartGroup
};
