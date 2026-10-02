#pragma once

class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x7C0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x790]; // offset 0x0
    ERejuvenatorRespawnMechanic m_eRespawnMechanic; // offset 0x790, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRespawnDelay; // offset 0x794, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flBonusClipSize; // offset 0x798, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBonusFirerate; // offset 0x79C, size 0x4, align 4
    float32 m_flBonusHealth; // offset 0x7A0, size 0x4, align 4
    float32 m_flBonusMoveSpeedMeterPerSecond; // offset 0x7A4, size 0x4, align 4
    CSoundEventName m_sExpireSound; // offset 0x7A8, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxMessages; // offset 0x7B8, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMessageInterval; // offset 0x7BC, size 0x4, align 4
};
