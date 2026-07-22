#pragma once

class CDarkCarnivalCrateDropEntity : public C_PhysicsProp /*0x0*/  // sizeof 0xCD0, align 0x10 [vtable] (client) {MEntityAllowsPortraitWorldSpawn}
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    DOTACrateDropObjectDefID_t m_unDefID; // offset 0xC40, size 0x4, align 255
    char _pad_0C44[0xC]; // offset 0xC44
    float32 m_flAcceleration; // offset 0xC50, size 0x4, align 4
    float32 m_flMaxSpeed; // offset 0xC54, size 0x4, align 4
    char _pad_0C58[0x14]; // offset 0xC58
    int8 m_nTutorialObject; // offset 0xC6C, size 0x1, align 1
    int8 m_nDisableSpawnRotation; // offset 0xC6D, size 0x1, align 1
    char _pad_0C6E[0x22]; // offset 0xC6E
    float32 m_flPoints; // offset 0xC90, size 0x4, align 4
    float32 m_flHazardExplosionRadius; // offset 0xC94, size 0x4, align 4
    float32 m_flExplosionStrength; // offset 0xC98, size 0x4, align 4
    float32 m_flUpkickExplosionStrength; // offset 0xC9C, size 0x4, align 4
    float32 m_flTriggerDelay; // offset 0xCA0, size 0x4, align 4
    float32 m_flTriggeredGravityScale; // offset 0xCA4, size 0x4, align 4
    bool m_bHasBeenTriggered; // offset 0xCA8, size 0x1, align 1
    bool m_bHazardDefused; // offset 0xCA9, size 0x1, align 1
    bool m_bCurrentlyActivated; // offset 0xCAA, size 0x1, align 1
    char _pad_0CAB[0x1]; // offset 0xCAB
    GameTime_t m_flNextPossibleTriggerTime; // offset 0xCAC, size 0x4, align 255
    GameTime_t m_flCreationTime; // offset 0xCB0, size 0x4, align 255
    char _pad_0CB4[0x4]; // offset 0xCB4
    CNewParticleEffect* pDropEffect; // offset 0xCB8, size 0x8, align 8
    bool m_bMarkedForDestroy; // offset 0xCC0, size 0x1, align 1
    bool m_bHazardRotationApplied; // offset 0xCC1, size 0x1, align 1
    char _pad_0CC2[0xE]; // offset 0xCC2
};
