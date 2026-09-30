#pragma once

class CCitadel_Modifier_RespawnCreditVData : public CCitadelModifierVData /*0x0*/  // sizeof 0x790, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x760]; // offset 0x0
    ERejuvenatorRespawnMechanic m_eRespawnMechanic; // offset 0x760, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flRespawnDelay; // offset 0x764, size 0x4, align 4 | MPropertySuppressExpr MPropertyDescription
    float32 m_flBonusClipSize; // offset 0x768, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flBonusFirerate; // offset 0x76C, size 0x4, align 4
    float32 m_flBonusHealth; // offset 0x770, size 0x4, align 4
    float32 m_flBonusMoveSpeedMeterPerSecond; // offset 0x774, size 0x4, align 4
    CSoundEventName m_sExpireSound; // offset 0x778, size 0x10, align 8 | MPropertyStartGroup
    int32 m_iMaxMessages; // offset 0x788, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flMessageInterval; // offset 0x78C, size 0x4, align 4
};
