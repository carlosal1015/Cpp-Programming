Build
===

```bash
bundle update
gem cleanup
bundle install
bundle exec rake build # Don't working
bundle exec jekyll clean
bundle exec jekyll build
bundle exec jekyll serve
gem update --system
```