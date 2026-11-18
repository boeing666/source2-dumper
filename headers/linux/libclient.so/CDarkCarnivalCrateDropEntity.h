#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xFB0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xF1C]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xF1C, size 0x4, align 255
    char _pad_0F20[0xC]; // offset 0xF20
    float32 m_flAcceleration; // offset 0xF2C, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xF30, size 0x4, align 4
    char _pad_0F34[0x14]; // offset 0xF34
    int8 m_nTutorialObject; // offset 0xF48, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xF49, size 0x1, align 1
    char _pad_0F4A[0x26]; // offset 0xF4A
    float32 m_flPoints; // offset 0xF70, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xF74, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xF78, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xF7C, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xF80, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xF84, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xF88, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xF89, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xF8A, size 0x1, align 1
    char _pad_0F8B[0x1]; // offset 0xF8B
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xF8C, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xF90, size 0x4, align 255
    char _pad_0F94[0x4]; // offset 0xF94
    CNewParticleEffect* pDropEffect; // offset 0xF98, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xFA0, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xFA1, size 0x1, align 1
    char _pad_0FA2[0xE]; // offset 0xFA2
};
