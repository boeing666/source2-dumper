#pragma once

struct ArtyGameObjectInstance_t  // sizeof 0x38, align 0x8 [vtable] (client) {MGetKV3ClassDefaults MVDataRoot}
{
    char _pad_0000[0x8]; // offset 0x0
    CUtlString m_szName; // offset 0x8, size 0x8, align 8
    CUtlString m_szGameObject; // offset 0x10, size 0x8, align 8
    char _pad_0018[0x4]; // offset 0x18
    Vector2D m_vPosition; // offset 0x1C, size 0x8, align 4
    float32 m_flRotation; // offset 0x24, size 0x4, align 4
    Vector2D m_vScale; // offset 0x28, size 0x8, align 4
    bool m_bFacingLeft; // offset 0x30, size 0x1, align 1
    char _pad_0031[0x3]; // offset 0x31
    float32 m_flYawOffset; // offset 0x34, size 0x4, align 4
};
