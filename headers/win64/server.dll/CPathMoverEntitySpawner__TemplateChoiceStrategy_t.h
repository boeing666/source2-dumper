#pragma once

enum CPathMoverEntitySpawner::TemplateChoiceStrategy_t : uint32_t  // sizeof 0x4
{
    TEMPLATE_CHOICE_COUNT_SEQUENTIAL = 0,
    TEMPLATE_CHOICE_WEIGHTED_RANDOM = 1,
    TEMPLATE_CHOICE_COUNT_RANDOM = 2,
};
