#pragma once

struct ModelSkeletonData_t  // sizeof 0xA8, align 0x8 (modellib) {MGetKV3ClassDefaults}
{
    CUtlVector< CUtlString > m_boneName; // offset 0x0, size 0x18, align 8
    CUtlVector< int16 > m_nParent; // offset 0x18, size 0x18, align 8
    CUtlVector< float32 > m_boneSphere; // offset 0x30, size 0x18, align 8
    CUtlVector< uint32 > m_nFlag; // offset 0x48, size 0x18, align 8
    CUtlVector< Vector > m_bonePosParent; // offset 0x60, size 0x18, align 8
    CUtlVector< QuaternionStorage > m_boneRotParent; // offset 0x78, size 0x18, align 8
    CUtlVector< float32 > m_boneScaleParent; // offset 0x90, size 0x18, align 8
};
