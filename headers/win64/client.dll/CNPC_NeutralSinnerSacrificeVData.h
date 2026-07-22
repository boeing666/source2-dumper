#pragma once

class CNPC_NeutralSinnerSacrificeVData : public CNPC_TrooperNeutralVData /*0x0*/  // sizeof 0x18F0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x16C0]; // offset 0x0
    float32 m_flRetaliateDamage; // offset 0x16C0, size 0x4, align 4 | MPropertyStartGroup MPropertyDescription
    float32 m_flVaultMiniGameTime; // offset 0x16C4, size 0x4, align 4 | MPropertyStartGroup
    float32 m_flVaultMiniGameHitWindow; // offset 0x16C8, size 0x4, align 4
    float32 m_flVaultMiniGameWheelScrollTime; // offset 0x16CC, size 0x4, align 4
    int32 m_iVaultSuccessLightBuffDropCount; // offset 0x16D0, size 0x4, align 4
    int32 m_iVaultSuccessHeavyBuffDropCount; // offset 0x16D4, size 0x4, align 4
    float32 m_flVaultLightScrollTime; // offset 0x16D8, size 0x4, align 4
    float32 m_flVaultWheelScrollTime; // offset 0x16DC, size 0x4, align 4
    float32 m_flVaultSuccessLightsScroll; // offset 0x16E0, size 0x4, align 4
    float32 m_flVaultSuccessWheelScroll; // offset 0x16E4, size 0x4, align 4
    float32 m_flVaultSuccessDestroyTime; // offset 0x16E8, size 0x4, align 4
    char _pad_16EC[0x4]; // offset 0x16EC
    CResourceNameTyped< CWeakHandle< InfoForResourceTypeIParticleSystemDefinition > > m_VaultSuccessParticle; // offset 0x16F0, size 0xE0, align 8
    CSoundEventName m_VaultIdleLoopSound; // offset 0x17D0, size 0x10, align 8 | MPropertyStartGroup
    CSoundEventName m_VaultStartActiveSound; // offset 0x17E0, size 0x10, align 8
    CSoundEventName m_VaultActiveLoopSound; // offset 0x17F0, size 0x10, align 8
    CSoundEventName m_VaultStartCriticalSound; // offset 0x1800, size 0x10, align 8
    CSoundEventName m_VaultCriticalLoopSound; // offset 0x1810, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundLight; // offset 0x1820, size 0x10, align 8
    CSoundEventName m_VaultHitSuccessSoundHeavy; // offset 0x1830, size 0x10, align 8
    CSoundEventName m_VaultHitFailSound; // offset 0x1840, size 0x10, align 8
    CSoundEventName m_VaultHit01; // offset 0x1850, size 0x10, align 8
    CSoundEventName m_VaultHit02; // offset 0x1860, size 0x10, align 8
    CSoundEventName m_VaultHit03; // offset 0x1870, size 0x10, align 8
    CSoundEventName m_VaultHit04; // offset 0x1880, size 0x10, align 8
    CSoundEventName m_VaultHit05; // offset 0x1890, size 0x10, align 8
    CSoundEventName m_VaultHit06; // offset 0x18A0, size 0x10, align 8
    CSoundEventName m_VaultHit07; // offset 0x18B0, size 0x10, align 8
    CSoundEventName m_VaultLight; // offset 0x18C0, size 0x10, align 8
    CSoundEventName m_VaultLightHitWindow; // offset 0x18D0, size 0x10, align 8
    CSoundEventName m_VaultWheelSuccessDing; // offset 0x18E0, size 0x10, align 8
};
