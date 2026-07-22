#pragma once

class CCraftworksDefinition  // sizeof 0x160, align 0x8 (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    CUtlString m_sName; // offset 0x0, size 0x8, align 8
    CraftworksID_t m_unCraftworksID; // offset 0x8, size 0x1, align 255
    char _pad_0009[0x3]; // offset 0x9
    EEvent m_eAssociatedEvent; // offset 0xC, size 0x4, align 4
    CUtlVector< CCraftworksComponentDefinition > m_vecComponents; // offset 0x10, size 0x18, align 8
    CUtlVector< CCraftworksRecipeTierDefinition > m_vecRecipeTiers; // offset 0x28, size 0x18, align 8
    CUtlVector< CCraftworksRecipeDefinition > m_vecRecipes; // offset 0x40, size 0x18, align 8
    CUtlVector< CCraftworksQuestDefinition > m_vecQuests; // offset 0x58, size 0x18, align 8
    char _pad_0070[0xF0]; // offset 0x70
};
