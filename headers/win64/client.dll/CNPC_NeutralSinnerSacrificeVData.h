#pragma once

class CNPC_NeutralSinnerSacrificeVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0x1170, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xEF0]; // offset 0x0
    float32 m_flRetaliateDamage; // offset 0xEF0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flVaultMiniGameTime; // offset 0xEF4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVaultMiniGameHitWindow; // offset 0xEF8, size 0x4, align 4
    float32 m_flVaultMiniGameWheelScrollTime; // offset 0xEFC, size 0x4, align 4
    int32 m_iVaultSuccessLightBuffDropCount; // offset 0xF00, size 0x4, align 4
    int32 m_iVaultSuccessHeavyBuffDropCount; // offset 0xF04, size 0x4, align 4
    float32 m_flMiniGameFastSpeed; // offset 0xF08, size 0x4, align 4
    float32 m_flMiniGameFastChance; // offset 0xF0C, size 0x4, align 4
    CModelMaterialGroupName m_strFastMaterialGroup; // offset 0xF10, size 0x8, align 8
    float32 m_flVaultLightScrollTime; // offset 0xF18, size 0x4, align 4
    float32 m_flVaultWheelScrollTime; // offset 0xF1C, size 0x4, align 4
    float32 m_flVaultLightFastFlashTime; // offset 0xF20, size 0x4, align 4
    float32 m_flVaultSuccessLightsScroll; // offset 0xF24, size 0x4, align 4
    float32 m_flVaultSuccessWheelScroll; // offset 0xF28, size 0x4, align 4
    float32 m_flVaultSuccessDestroyTime; // offset 0xF2C, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VaultSuccessParticle; // offset 0xF30, size 0xE0, align 8
    CSoundEventName m_VaultIdleLoopSound; // offset 0x1010, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VaultStartActiveSound; // offset 0x1020, size 0x10, align 8
    CSoundEventName m_VaultActiveLoopSound; // offset 0x1030, size 0x10, align 8
    CSoundEventName m_VaultStartCriticalSound; // offset 0x1040, size 0x10, align 8
    CSoundEventName m_VaultStartFastCriticalSound; // offset 0x1050, size 0x10, align 8
    CSoundEventName m_VaultCriticalLoopSound; // offset 0x1060, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundLight; // offset 0x1070, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundHeavy; // offset 0x1080, size 0x10, align 8
    CSoundEventName m_VaultHitFailSound; // offset 0x1090, size 0x10, align 8
    CSoundEventName m_VaultLightPowerupGainedSound; // offset 0x10A0, size 0x10, align 8
    CSoundEventName m_VaultHeavyPowerupGainedSound; // offset 0x10B0, size 0x10, align 8
    CSoundEventName m_VaultHit01; // offset 0x10C0, size 0x10, align 8
    CSoundEventName m_VaultHit02; // offset 0x10D0, size 0x10, align 8
    CSoundEventName m_VaultHit03; // offset 0x10E0, size 0x10, align 8
    CSoundEventName m_VaultHit04; // offset 0x10F0, size 0x10, align 8
    CSoundEventName m_VaultHit05; // offset 0x1100, size 0x10, align 8
    CSoundEventName m_VaultHit06; // offset 0x1110, size 0x10, align 8
    CSoundEventName m_VaultHit07; // offset 0x1120, size 0x10, align 8
    CSoundEventName m_VaultLight; // offset 0x1130, size 0x10, align 8
    CSoundEventName m_VaultFastLightFlash; // offset 0x1140, size 0x10, align 8
    CSoundEventName m_VaultLightHitWindow; // offset 0x1150, size 0x10, align 8
    CSoundEventName m_VaultWheelSuccessDing; // offset 0x1160, size 0x10, align 8
};
