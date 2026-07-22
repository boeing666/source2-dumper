#pragma once

class CVoxelVisibility  // sizeof 0xA0, align 0x8 (resourcecompiler) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x40]; // offset 0x0
    uint32 m_nBaseClusterCount; // offset 0x40, size 0x4, align 4
    uint32 m_nPVSBytesPerCluster; // offset 0x44, size 0x4, align 4
    Vector m_vMinBounds; // offset 0x48, size 0xC, align 4
    Vector m_vMaxBounds; // offset 0x54, size 0xC, align 4
    float32 m_flGridSize; // offset 0x60, size 0x4, align 4
    uint32 m_nSkyVisibilityCluster; // offset 0x64, size 0x4, align 4
    uint32 m_nSunVisibilityCluster; // offset 0x68, size 0x4, align 4
    VoxelVisBlockOffset_t m_NodeBlock; // offset 0x6C, size 0x8, align 4
    VoxelVisBlockOffset_t m_RegionBlock; // offset 0x74, size 0x8, align 4
    VoxelVisBlockOffset_t m_EnclosedClusterListBlock; // offset 0x7C, size 0x8, align 4
    VoxelVisBlockOffset_t m_EnclosedClustersBlock; // offset 0x84, size 0x8, align 4
    VoxelVisBlockOffset_t m_MasksBlock; // offset 0x8C, size 0x8, align 4
    VoxelVisBlockOffset_t m_nVisBlocks; // offset 0x94, size 0x8, align 4
    char _pad_009C[0x4]; // offset 0x9C
};
