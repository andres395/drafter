//
//  options.cc
//  drafter
//
//  Created by Thomas Jandecka on 2020-02-04
//  Copyright (c) 2020 Apiary Inc. All rights reserved.
//
#include "options.h"

bool drafter::is_name_required(const drafter_parse_options* opts) noexcept
{
    return opts && opts->flags.test(drafter_parse_options::NAME_REQUIRED);
}

bool drafter::are_sourcemaps_included(const drafter_serialize_options* opts) noexcept
{
    return opts && opts->flags.test(drafter_serialize_options::SOURCEMAPS_INCLUDED);
}

drafter_format drafter::get_format(const drafter_serialize_options* opts) noexcept
{
    return opts ? opts->format : DRAFTER_SERIALIZE_YAML;
}

bool drafter::is_omit_generated_values(const drafter_parse_options* opts) noexcept
{
    return opts && opts->flags.test(drafter_parse_options::OMIT_GENERATED_VALUES);
}

bool drafter::is_omit_generated_schemas(const drafter_parse_options* opts) noexcept
{
    return opts && opts->flags.test(drafter_parse_options::OMIT_GENERATED_SCHEMAS);
}
