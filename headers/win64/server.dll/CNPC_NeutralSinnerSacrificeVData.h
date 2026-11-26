#pragma once

class CNPC_NeutralSinnerSacrificeVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0x11A8, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0xF20]; // offset 0x0
    float32 m_flRetaliateDamage; // offset 0xF20, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flRetaliateDamageMaxHealthPercent; // offset 0xF24, size 0x4, align 4 | MPropertyDescription
    float32 m_flVaultMiniGameTime; // offset 0xF28, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVaultMiniGameHitWindow; // offset 0xF2C, size 0x4, align 4
    float32 m_flVaultMiniGameWheelScrollTime; // offset 0xF30, size 0x4, align 4
    int32 m_iVaultSuccessLightBuffDropCount; // offset 0xF34, size 0x4, align 4
    int32 m_iVaultSuccessHeavyBuffDropCount; // offset 0xF38, size 0x4, align 4
    float32 m_flMiniGameFastSpeed; // offset 0xF3C, size 0x4, align 4
    float32 m_flMiniGameFastChance; // offset 0xF40, size 0x4, align 4
    char _pad_0F44[0x4]; // offset 0xF44
    CModelMaterialGroupName m_strFastMaterialGroup; // offset 0xF48, size 0x8, align 8
    float32 m_flVaultLightScrollTime; // offset 0xF50, size 0x4, align 4
    float32 m_flVaultWheelScrollTime; // offset 0xF54, size 0x4, align 4
    float32 m_flVaultLightFastFlashTime; // offset 0xF58, size 0x4, align 4
    float32 m_flVaultSuccessLightsScroll; // offset 0xF5C, size 0x4, align 4
    float32 m_flVaultSuccessWheelScroll; // offset 0xF60, size 0x4, align 4
    float32 m_flVaultSuccessDestroyTime; // offset 0xF64, size 0x4, align 4
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VaultSuccessParticle; // offset 0xF68, size 0xE0, align 8
    CSoundEventName m_VaultIdleLoopSound; // offset 0x1048, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VaultStartActiveSound; // offset 0x1058, size 0x10, align 8
    CSoundEventName m_VaultActiveLoopSound; // offset 0x1068, size 0x10, align 8
    CSoundEventName m_VaultStartCriticalSound; // offset 0x1078, size 0x10, align 8
    CSoundEventName m_VaultStartFastCriticalSound; // offset 0x1088, size 0x10, align 8
    CSoundEventName m_VaultCriticalLoopSound; // offset 0x1098, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundLight; // offset 0x10A8, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundHeavy; // offset 0x10B8, size 0x10, align 8
    CSoundEventName m_VaultHitFailSound; // offset 0x10C8, size 0x10, align 8
    CSoundEventName m_VaultLightPowerupGainedSound; // offset 0x10D8, size 0x10, align 8
    CSoundEventName m_VaultHeavyPowerupGainedSound; // offset 0x10E8, size 0x10, align 8
    CSoundEventName m_VaultHit01; // offset 0x10F8, size 0x10, align 8
    CSoundEventName m_VaultHit02; // offset 0x1108, size 0x10, align 8
    CSoundEventName m_VaultHit03; // offset 0x1118, size 0x10, align 8
    CSoundEventName m_VaultHit04; // offset 0x1128, size 0x10, align 8
    CSoundEventName m_VaultHit05; // offset 0x1138, size 0x10, align 8
    CSoundEventName m_VaultHit06; // offset 0x1148, size 0x10, align 8
    CSoundEventName m_VaultHit07; // offset 0x1158, size 0x10, align 8
    CSoundEventName m_VaultLight; // offset 0x1168, size 0x10, align 8
    CSoundEventName m_VaultFastLightFlash; // offset 0x1178, size 0x10, align 8
    CSoundEventName m_VaultLightHitWindow; // offset 0x1188, size 0x10, align 8
    CSoundEventName m_VaultWheelSuccessDing; // offset 0x1198, size 0x10, align 8
};
