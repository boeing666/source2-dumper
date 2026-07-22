#pragma once

class CSceneObjectData  // sizeof 0xB8, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
public:
    Vector m_vMinBounds; // offset 0x0, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0xC, size 0xC, align 4
    CUtlLeanVector< CMaterialDrawDescriptor > m_drawCalls; // offset 0x18, size 0x10, align 8
    CUtlLeanVector< AABB_t > m_drawBounds; // offset 0x28, size 0x10, align 8
    CUtlLeanVector< CMeshletDescriptor > m_meshlets; // offset 0x38, size 0x10, align 8
    CUtlLeanVector< CSceneObjectData::RTProxyDrawDescriptor_t > m_rtProxyDrawCalls; // offset 0x48, size 0x10, align 8
    Vector4D m_vTintColor; // offset 0x58, size 0x10, align 4
    char _pad_0068[0x50]; // offset 0x68
};
