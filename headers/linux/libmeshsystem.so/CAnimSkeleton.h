#pragma once

class CAnimSkeleton  // sizeof 0xD0, align 0x8 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CUtlVector< CTransform > m_localSpaceTransforms; // offset 0x10, size 0x18, align 8
    CUtlVector< CTransform > m_modelSpaceTransforms; // offset 0x28, size 0x18, align 8
    CUtlVector< CUtlString > m_boneNames; // offset 0x40, size 0x18, align 8
    CUtlVector< CUtlVector< int32 > > m_children; // offset 0x58, size 0x18, align 8
    CUtlVector< int32 > m_parents; // offset 0x70, size 0x18, align 8
    CUtlVector< CAnimFoot > m_feet; // offset 0x88, size 0x18, align 8
    CUtlVector< CUtlString > m_morphNames; // offset 0xA0, size 0x18, align 8
    CUtlVector< int32 > m_lodBoneCounts; // offset 0xB8, size 0x18, align 8
};
