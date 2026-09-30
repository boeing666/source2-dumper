#pragma once

struct CCitadelNPCModelGameData_t  // sizeof 0x1C, align 0x4 [trivial_dtor] (client) {MModelGameData MGetKV3ClassDefaults MPropertyFriendlyName}
{
    bool m_bTurnEnabled; // offset 0x0, size 0x1, align 1
    bool m_bDisablePivotAnim; // offset 0x1, size 0x1, align 1
    char _pad_0002[0x2]; // offset 0x2
    float32 m_flTurnThreshold; // offset 0x4, size 0x4, align 4
    float32 m_flTurnDuration; // offset 0x8, size 0x4, align 4
    float32 m_flLookAtPitchMin; // offset 0xC, size 0x4, align 4
    float32 m_flLookAtPitchMax; // offset 0x10, size 0x4, align 4
    float32 m_flLookAtYawMin; // offset 0x14, size 0x4, align 4
    float32 m_flLookAtYawMax; // offset 0x18, size 0x4, align 4
};
