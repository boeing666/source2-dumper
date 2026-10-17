#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xF40, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xEAC]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xEAC, size 0x4, align 255
    char _pad_0EB0[0xC]; // offset 0xEB0
    float32 m_flAcceleration; // offset 0xEBC, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xEC0, size 0x4, align 4
    char _pad_0EC4[0x14]; // offset 0xEC4
    int8 m_nTutorialObject; // offset 0xED8, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xED9, size 0x1, align 1
    char _pad_0EDA[0x26]; // offset 0xEDA
    float32 m_flPoints; // offset 0xF00, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xF04, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xF08, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xF0C, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xF10, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xF14, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xF18, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xF19, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xF1A, size 0x1, align 1
    char _pad_0F1B[0x1]; // offset 0xF1B
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xF1C, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xF20, size 0x4, align 255
    char _pad_0F24[0x4]; // offset 0xF24
    CNewParticleEffect* pDropEffect; // offset 0xF28, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xF30, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xF31, size 0x1, align 1
    char _pad_0F32[0xE]; // offset 0xF32
};
