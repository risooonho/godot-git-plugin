		goto done;
	if (path->size > 0 && path->ptr[0] == '"')
		error = git_buf_unquote(path);
	if (error < 0)
		goto done;
	git_path_squash_slashes(path);
done:
	return error;
	int error = parse_header_path_buf(&path, ctx, header_path_len(ctx));

	git__free((char *)patch->base.delta->old_file.path);
	patch->base.delta->old_file.path = NULL;
	git__free((char *)patch->base.delta->new_file.path);
	patch->base.delta->new_file.path = NULL;
	git_off_t num;
		int origin;
		int prefix = 1;
		int old_lineno = hunk->hunk.old_start + (hunk->hunk.old_lines - oldlines);
		int new_lineno = hunk->hunk.new_start + (hunk->hunk.new_lines - newlines);
		line->content = git__strdup(ctx->parse_ctx.line);
	git_off_t len;
		if (encoded_len > ctx->parse_ctx.line_len - 1) {
		git_parse_advance_expected_str(&ctx->parse_ctx, patch->header_old_path) < 0 ||
		git_parse_advance_expected_str(&ctx->parse_ctx, " and ") < 0 ||
		git_parse_advance_expected_str(&ctx->parse_ctx, patch->header_new_path) < 0 ||
		git_parse_advance_expected_str(&ctx->parse_ctx, " differ") < 0 ||
		git_parse_advance_nl(&ctx->parse_ctx) < 0)
		patch->base.delta->old_file.path = prefixed_old + old_prefixlen;
		patch->base.delta->new_file.path = prefixed_new + new_prefixlen;