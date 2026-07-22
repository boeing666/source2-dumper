#pragma once

struct CompositeMaterialAssemblyProcedure_t  // sizeof 0x60, align 0x8 (compositematerialslib) {MGetKV3ClassDefaults MPropertyElementNameFn}
{
    CUtlVector< CResourceNameTyped< CWeakHandle< InfoForResourceTypeCCompositeMaterialKit > > > m_vecCompMatIncludes; // offset 0x0, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CompositeMaterialMatchFilter_t > m_vecMatchFilters; // offset 0x18, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CompositeMaterialInputContainer_t > m_vecCompositeInputContainers; // offset 0x30, size 0x18, align 8 | MPropertyFriendlyName
    CUtlVector< CompMatPropertyMutator_t > m_vecPropertyMutators; // offset 0x48, size 0x18, align 8 | MPropertyFriendlyName
};
