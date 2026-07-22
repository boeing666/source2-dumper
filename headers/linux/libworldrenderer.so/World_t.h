#pragma once

struct World_t  // sizeof 0xD8, align 0x8 (worldrenderer) {MGetKV3ClassDefaults}
{
    WorldBuilderParams_t m_builderParams; // offset 0x0, size 0x60, align 8
    CUtlVector< NodeData_t > m_worldNodes; // offset 0x60, size 0x18, align 8
    BakedLightingInfo_t m_worldLightingInfo; // offset 0x78, size 0x48, align 8
    CUtlVector< CStrongHandleCopyable< InfoForResourceTypeCEntityLump > > m_entityLumps; // offset 0xC0, size 0x18, align 8
};
