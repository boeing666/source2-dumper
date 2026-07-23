#pragma once

class CNPCPhysicsHull  // sizeof 0x40, align 0x8 (modellib) {MGetKV3ClassDefaults MModelGameData MFgdHelper MFgdHelper}
{
public:
    CGlobalSymbol m_sName; // offset 0x0, size 0x8, align 8 | MPropertyFriendlyName MPropertySuppressField
    NPCPhysicsHullType_t m_eType; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flCapsuleHeight; // offset 0xC, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    float32 m_flCapsuleRadius; // offset 0x10, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    Vector m_vCapsuleCenter1; // offset 0x14, size 0xC, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    Vector m_vCapsuleCenter2; // offset 0x20, size 0xC, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    float32 m_flGroundBoxHeight; // offset 0x2C, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    float32 m_flGroundBoxWidth; // offset 0x30, size 0x4, align 4 | MPropertySuppressExpr MPropertyFriendlyName
    char _pad_0034[0xC]; // offset 0x34
};
