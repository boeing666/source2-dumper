#pragma once

struct CitadelCameraSettings_t  // sizeof 0x28, align 0x4 [trivial_dtor] (client) {MModelGameData MGetKV3ClassDefaults}
{
    float32 m_flCameraSideOffset; // offset 0x0, size 0x4, align 4
    float32 m_flCameraSideOffsetZiplining; // offset 0x4, size 0x4, align 4 | MPropertyDescription
    float32 m_flCameraBackOffset; // offset 0x8, size 0x4, align 4
    float32 m_flCameraBackOffsetAiming; // offset 0xC, size 0x4, align 4
    float32 m_flCameraHeightStanding; // offset 0x10, size 0x4, align 4
    float32 m_flCameraHeightCrouching; // offset 0x14, size 0x4, align 4
    float32 m_flCameraHeightOffsetZiplining; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    Vector m_vCameraParrotOffset; // offset 0x1C, size 0xC, align 4 | MPropertyDescription
};
